
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateIpGroupIpOption_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateIpGroupIpOption_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// create ip group ip option
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  CreateIpGroupIpOption
    : public ModelBase
{
public:
    CreateIpGroupIpOption();
    virtual ~CreateIpGroupIpOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateIpGroupIpOption members

    /// <summary>
    /// IP地址组中的IP网段，cidr格式。
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// IP地址组中的IP网段描述，取值范围：0~255个字符之间，禁止输入字符：&lt;&gt;。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string cidr_;
    bool cidrIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateIpGroupIpOption_H_
