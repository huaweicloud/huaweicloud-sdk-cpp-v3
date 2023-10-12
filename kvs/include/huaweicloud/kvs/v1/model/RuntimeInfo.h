
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_RuntimeInfo_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_RuntimeInfo_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/LsiIndexInfo.h>
#include <huaweicloud/kvs/v1/model/GsiIndexInfo.h>
#include <huaweicloud/kvs/v1/model/TableInfo.h>
#include <vector>

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
class HUAWEICLOUD_KVS_V1_EXPORT  RuntimeInfo
    : public ModelBase
{
public:
    RuntimeInfo();
    virtual ~RuntimeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// RuntimeInfo members

    /// <summary>
    /// 
    /// </summary>

    TableInfo getTableInfo() const;
    bool tableInfoIsSet() const;
    void unsettableInfo();
    void setTableInfo(const TableInfo& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<LsiIndexInfo>& getLocal2ndIndexesInfo();
    bool local2ndIndexesInfoIsSet() const;
    void unsetlocal2ndIndexesInfo();
    void setLocal2ndIndexesInfo(const std::vector<LsiIndexInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<GsiIndexInfo>& getGlobal2ndIndexesInfo();
    bool global2ndIndexesInfoIsSet() const;
    void unsetglobal2ndIndexesInfo();
    void setGlobal2ndIndexesInfo(const std::vector<GsiIndexInfo>& value);


protected:
    TableInfo tableInfo_;
    bool tableInfoIsSet_;
    std::vector<LsiIndexInfo> local2ndIndexesInfo_;
    bool local2ndIndexesInfoIsSet_;
    std::vector<GsiIndexInfo> global2ndIndexesInfo_;
    bool global2ndIndexesInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_RuntimeInfo_H_
