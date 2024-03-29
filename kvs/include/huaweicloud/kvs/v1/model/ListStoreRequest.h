
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_ListStoreRequest_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_ListStoreRequest_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/ListStoreRequestBody.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  ListStoreRequest
    : public ModelBase
{
public:
    ListStoreRequest();
    virtual ~ListStoreRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// ListStoreRequest members

    /// <summary>
    /// 
    /// </summary>

    ListStoreRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListStoreRequestBody& value);


protected:
    ListStoreRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListStoreRequest& dereference_from_shared_ptr(std::shared_ptr<ListStoreRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_ListStoreRequest_H_
