
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResponseSchemaConfigDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResponseSchemaConfigDto_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/ResponseSchemaPropertiesDetailsDto.h>
#include <huaweicloud/identitycenter/v1/model/ResponseSchemaSubjectDetailsDto.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 应用程序Schema属性映射配置
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ResponseSchemaConfigDto
    : public ModelBase
{
public:
    ResponseSchemaConfigDto();
    virtual ~ResponseSchemaConfigDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResponseSchemaConfigDto members

    /// <summary>
    /// 额外添加的属性映射Schema配置
    /// </summary>

    std::map<std::string, ResponseSchemaPropertiesDetailsDto>& getProperties();
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const std::map<std::string, ResponseSchemaPropertiesDetailsDto>& value);

    /// <summary>
    /// 
    /// </summary>

    ResponseSchemaSubjectDetailsDto getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const ResponseSchemaSubjectDetailsDto& value);

    /// <summary>
    /// 应用程序支持的Subject NameID格式
    /// </summary>

    std::vector<std::string>& getSupportedNameIdFormats();
    bool supportedNameIdFormatsIsSet() const;
    void unsetsupportedNameIdFormats();
    void setSupportedNameIdFormats(const std::vector<std::string>& value);


protected:
    std::map<std::string, ResponseSchemaPropertiesDetailsDto> properties_;
    bool propertiesIsSet_;
    ResponseSchemaSubjectDetailsDto subject_;
    bool subjectIsSet_;
    std::vector<std::string> supportedNameIdFormats_;
    bool supportedNameIdFormatsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ResponseSchemaConfigDto_H_
