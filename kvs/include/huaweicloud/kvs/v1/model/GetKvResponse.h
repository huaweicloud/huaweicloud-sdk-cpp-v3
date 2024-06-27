
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_GetKvResponse_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_GetKvResponse_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/bson/Bson.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  GetKvResponse
    : public ModelBase, public HttpResponse
{
public:
    GetKvResponse();
    virtual ~GetKvResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// GetKvResponse members

    /// <summary>
    /// 对kv_doc有效。 &gt; 内容字段：主键字段+投影字段或者全部字段。
    /// </summary>

    Document getKvDoc() const;
    bool kvDocIsSet() const;
    void unsetkvDoc();
    void setKvDoc(const Document& value);


protected:
    Document kvDoc_;
    bool kvDocIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_GetKvResponse_H_
