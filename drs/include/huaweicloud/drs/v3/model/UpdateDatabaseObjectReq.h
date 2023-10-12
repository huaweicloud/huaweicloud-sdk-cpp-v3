
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_UpdateDatabaseObjectReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_UpdateDatabaseObjectReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/drs/v3/model/DatabaseInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新对象选择信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  UpdateDatabaseObjectReq
    : public ModelBase
{
public:
    UpdateDatabaseObjectReq();
    virtual ~UpdateDatabaseObjectReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDatabaseObjectReq members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 是否进行对象选择，是：自定义迁移对象，否：全部迁移，不填默认为否。
    /// </summary>

    bool isSelected() const;
    bool selectedIsSet() const;
    void unsetselected();
    void setSelected(bool value);

    /// <summary>
    /// 是否库级同步
    /// </summary>

    bool isSyncDatabase() const;
    bool syncDatabaseIsSet() const;
    void unsetsyncDatabase();
    void setSyncDatabase(bool value);

    /// <summary>
    /// 数据对象选择信息，selected为true时必填。
    /// </summary>

    std::vector<DatabaseInfo>& getJob();
    bool jobIsSet() const;
    void unsetjob();
    void setJob(const std::vector<DatabaseInfo>& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    bool selected_;
    bool selectedIsSet_;
    bool syncDatabase_;
    bool syncDatabaseIsSet_;
    std::vector<DatabaseInfo> job_;
    bool jobIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_UpdateDatabaseObjectReq_H_
