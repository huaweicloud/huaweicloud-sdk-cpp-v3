
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateAppRequestBody_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateAppRequestBody_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  CreateAppRequestBody
    : public ModelBase
{
public:
    CreateAppRequestBody();
    virtual ~CreateAppRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAppRequestBody members

    /// <summary>
    /// 应用名称
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 应用所属的VPC的ID
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 应用所属的VPC的名称
    /// </summary>

    std::string getVpcName() const;
    bool vpcNameIsSet() const;
    void unsetvpcName();
    void setVpcName(const std::string& value);

    /// <summary>
    /// 应用所属的VPC的子网ID
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 应用所属的VPC的子网名称
    /// </summary>

    std::string getSubnetName() const;
    bool subnetNameIsSet() const;
    void unsetsubnetName();
    void setSubnetName(const std::string& value);

    /// <summary>
    /// 应用描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string appName_;
    bool appNameIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string vpcName_;
    bool vpcNameIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string subnetName_;
    bool subnetNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateAppRequestBody_H_
