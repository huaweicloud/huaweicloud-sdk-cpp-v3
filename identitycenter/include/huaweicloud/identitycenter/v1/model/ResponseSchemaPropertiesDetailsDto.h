
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResponseSchemaPropertiesDetailsDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResponseSchemaPropertiesDetailsDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 联邦Schema配置额外属性详细信息
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ResponseSchemaPropertiesDetailsDto
    : public ModelBase
{
public:
    ResponseSchemaPropertiesDetailsDto();
    virtual ~ResponseSchemaPropertiesDetailsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResponseSchemaPropertiesDetailsDto members

    /// <summary>
    /// 额外添加的属性的格式
    /// </summary>

    std::string getAttrNameFormat() const;
    bool attrNameFormatIsSet() const;
    void unsetattrNameFormat();
    void setAttrNameFormat(const std::string& value);

    /// <summary>
    /// 是否包含额外属性
    /// </summary>

    std::string getInclude() const;
    bool includeIsSet() const;
    void unsetinclude();
    void setInclude(const std::string& value);


protected:
    std::string attrNameFormat_;
    bool attrNameFormatIsSet_;
    std::string include_;
    bool includeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResponseSchemaPropertiesDetailsDto_H_
