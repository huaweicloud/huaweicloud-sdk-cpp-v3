
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TagDto_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TagDto_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自定义标签键值对。
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  TagDto
    : public ModelBase
{
public:
    TagDto();
    virtual ~TagDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagDto members

    /// <summary>
    /// 标签键的密钥标识符或名称。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 与标签键关联的字符串值。您可以将标签的值设置为空字符串，但不能将标签的值设置为NULL。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TagDto_H_
