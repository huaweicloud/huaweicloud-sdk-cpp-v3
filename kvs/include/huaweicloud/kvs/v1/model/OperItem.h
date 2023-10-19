
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_OperItem_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_OperItem_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/PutKv.h>
#include <huaweicloud/kvs/v1/model/GetKv.h>
#include <huaweicloud/kvs/v1/model/DeleteKv.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  OperItem
    : public ModelBase
{
public:
    OperItem();
    virtual ~OperItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// OperItem members

    /// <summary>
    /// 
    /// </summary>

    PutKv getPutKv() const;
    bool putKvIsSet() const;
    void unsetputKv();
    void setPutKv(const PutKv& value);

    /// <summary>
    /// 
    /// </summary>

    DeleteKv getDeleteKv() const;
    bool deleteKvIsSet() const;
    void unsetdeleteKv();
    void setDeleteKv(const DeleteKv& value);

    /// <summary>
    /// 
    /// </summary>

    GetKv getGetKv() const;
    bool getKvIsSet() const;
    void unsetgetKv();
    void setGetKv(const GetKv& value);


protected:
    PutKv putKv_;
    bool putKvIsSet_;
    DeleteKv deleteKv_;
    bool deleteKvIsSet_;
    GetKv getKv_;
    bool getKvIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_OperItem_H_
