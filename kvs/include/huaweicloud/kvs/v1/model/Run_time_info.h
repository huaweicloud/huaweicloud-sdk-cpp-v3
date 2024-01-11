
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Run_time_info_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Run_time_info_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Secondary_index_info.h>
#include <huaweicloud/kvs/v1/model/Table_info.h>
#include <vector>
#include <huaweicloud/kvs/v1/model/Global_secondary_index_info.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  Run_time_info
    : public ModelBase
{
public:
    Run_time_info();
    virtual ~Run_time_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Run_time_info members

    /// <summary>
    /// 
    /// </summary>

    Table_info getTableInfo() const;
    bool tableInfoIsSet() const;
    void unsettableInfo();
    void setTableInfo(const Table_info& value);

    /// <summary>
    /// 索引状态。
    /// </summary>

    std::vector<Secondary_index_info>& getLocalSecondaryIndexInfos();
    bool localSecondaryIndexInfosIsSet() const;
    void unsetlocalSecondaryIndexInfos();
    void setLocalSecondaryIndexInfos(const std::vector<Secondary_index_info>& value);

    /// <summary>
    /// 全局二级索引运行态。
    /// </summary>

    std::vector<Global_secondary_index_info>& getGlobalSecondaryIndexInfos();
    bool globalSecondaryIndexInfosIsSet() const;
    void unsetglobalSecondaryIndexInfos();
    void setGlobalSecondaryIndexInfos(const std::vector<Global_secondary_index_info>& value);


protected:
    Table_info tableInfo_;
    bool tableInfoIsSet_;
    std::vector<Secondary_index_info> localSecondaryIndexInfos_;
    bool localSecondaryIndexInfosIsSet_;
    std::vector<Global_secondary_index_info> globalSecondaryIndexInfos_;
    bool globalSecondaryIndexInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Run_time_info_H_
