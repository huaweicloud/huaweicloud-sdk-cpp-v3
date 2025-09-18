
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_IpInfo_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_IpInfo_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// IP地址组中的IP网段。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  IpInfo
    : public ModelBase
{
public:
    IpInfo();
    virtual ~IpInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpInfo members

    /// <summary>
    /// IP地址组中的IP网段，cidr格式。
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// IP地址组中的IP网段描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);


protected:
    std::string cidr_;
    bool cidrIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_IpInfo_H_
