
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Projection_blob_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Projection_blob_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_KVS_V1_EXPORT  Projection_blob
    : public ModelBase
{
public:
    Projection_blob();
    virtual ~Projection_blob();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Projection_blob members

    /// <summary>
    /// 是否返回kv_blob的属性信息, 默认返回。
    /// </summary>

    bool isWithAttr() const;
    bool withAttrIsSet() const;
    void unsetwithAttr();
    void setWithAttr(bool value);

    /// <summary>
    /// value部分的偏移位置，超过实际size不返回，默认_0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 数据长度，默认offset后全部数据。
    /// </summary>

    int32_t getLen() const;
    bool lenIsSet() const;
    void unsetlen();
    void setLen(int32_t value);


protected:
    bool withAttr_;
    bool withAttrIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t len_;
    bool lenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Projection_blob_H_
