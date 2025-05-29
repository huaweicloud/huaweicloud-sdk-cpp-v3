
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchGetKvRequest_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchGetKvRequest_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/kvs/v1/model/BatchGetKvRequestBody.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  BatchGetKvRequest
    : public ModelBase
{
public:
    BatchGetKvRequest();
    virtual ~BatchGetKvRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// BatchGetKvRequest members

    /// <summary>
    /// 仓名
    /// </summary>

    std::string getStoreName() const;
    bool storeNameIsSet() const;
    void unsetstoreName();
    void setStoreName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchGetKvRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchGetKvRequestBody& value);


protected:
    std::string storeName_;
    bool storeNameIsSet_;
    BatchGetKvRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchGetKvRequest& dereference_from_shared_ptr(std::shared_ptr<BatchGetKvRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_BatchGetKvRequest_H_
