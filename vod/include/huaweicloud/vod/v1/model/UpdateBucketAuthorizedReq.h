
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateBucketAuthorizedReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateBucketAuthorizedReq_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  UpdateBucketAuthorizedReq
    : public ModelBase
{
public:
    UpdateBucketAuthorizedReq();
    virtual ~UpdateBucketAuthorizedReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateBucketAuthorizedReq members

    /// <summary>
    /// OBS桶名称。
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// 是否进行桶授权。  取值如下： - 0：取消授权。 - 1：授权。
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

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateBucketAuthorizedReq_H_
