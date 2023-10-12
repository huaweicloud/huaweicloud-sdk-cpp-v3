
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ConfigurationCopyRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ConfigurationCopyRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ConfigurationCopyRequestBody
    : public ModelBase
{
public:
    ConfigurationCopyRequestBody();
    virtual ~ConfigurationCopyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigurationCopyRequestBody members

    /// <summary>
    /// 只支持a-zA-Z0-9._- 以上字符，长度限制1-64字符
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 不支持 !&lt;&gt;&#x3D;&amp;\&quot; &#39; 字符，长度限制0-256字符
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ConfigurationCopyRequestBody_H_
