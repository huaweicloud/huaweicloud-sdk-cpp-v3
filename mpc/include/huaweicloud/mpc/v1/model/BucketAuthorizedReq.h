
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_BucketAuthorizedReq_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_BucketAuthorizedReq_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  BucketAuthorizedReq
    : public ModelBase
{
public:
    BucketAuthorizedReq();
    virtual ~BucketAuthorizedReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BucketAuthorizedReq members

    /// <summary>
    /// 桶名 
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// 操作标记，取值[0,1]，0表示取消授权，1表示授权 
    /// </summary>

    std::string getOperation() const;
    bool operationIsSet() const;
    void unsetoperation();
    void setOperation(const std::string& value);


protected:
    std::string bucket_;
    bool bucketIsSet_;
    std::string operation_;
    bool operationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_BucketAuthorizedReq_H_
