
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanKvRequest_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanKvRequest_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/kvs/v1/model/ScanKvRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  ScanKvRequest
    : public ModelBase
{
public:
    ScanKvRequest();
    virtual ~ScanKvRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// ScanKvRequest members

    /// <summary>
    /// 仓名，全域唯一，不同租户的仓名不能相同。  - 格式：${prefix}-${region-code}-${account-id}，其中prefix为自定义前缀，region-code为kvs集群所在的区域代码，account-id为用户的账户id - 取值字符限制：[a-z0-9-]+ - 长度：[16,52] &gt; \&quot;-\&quot;不能出现在名字头部或尾部
    /// </summary>

    std::string getStoreName() const;
    bool storeNameIsSet() const;
    void unsetstoreName();
    void setStoreName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ScanKvRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ScanKvRequestBody& value);


protected:
    std::string storeName_;
    bool storeNameIsSet_;
    ScanKvRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ScanKvRequest& dereference_from_shared_ptr(std::shared_ptr<ScanKvRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanKvRequest_H_
