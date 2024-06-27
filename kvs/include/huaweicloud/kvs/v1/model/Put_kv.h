
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Put_kv_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Put_kv_H_

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
/// 
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  Put_kv
    : public ModelBase
{
public:
    Put_kv();
    virtual ~Put_kv();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Put_kv members

    /// <summary>
    /// 请求内的操作编码，未成功的操作返回该标识。
    /// </summary>

    int32_t getOperId() const;
    bool operIdIsSet() const;
    void unsetoperId();
    void setOperId(int32_t value);

    /// <summary>
    /// 用户文档。
    /// </summary>

    Document getKvDoc() const;
    bool kvDocIsSet() const;
    void unsetkvDoc();
    void setKvDoc(const Document& value);


protected:
    int32_t operId_;
    bool operIdIsSet_;
    Document kvDoc_;
    bool kvDocIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Put_kv_H_
