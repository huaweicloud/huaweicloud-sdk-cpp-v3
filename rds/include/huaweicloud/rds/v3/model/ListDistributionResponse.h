
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDistributionResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDistributionResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListDistributionResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDistributionResponse();
    virtual ~ListDistributionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDistributionResponse members

    /// <summary>
    /// 状态。normal，abnormal，creating，createfail
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 分发服务器实例id。
    /// </summary>

    std::string getDistributorInstanceId() const;
    bool distributorInstanceIdIsSet() const;
    void unsetdistributorInstanceId();
    void setDistributorInstanceId(const std::string& value);

    /// <summary>
    /// 分发服务器实例名称。
    /// </summary>

    std::string getDistributorInstanceName() const;
    bool distributorInstanceNameIsSet() const;
    void unsetdistributorInstanceName();
    void setDistributorInstanceName(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string distributorInstanceId_;
    bool distributorInstanceIdIsSet_;
    std::string distributorInstanceName_;
    bool distributorInstanceNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDistributionResponse_H_
