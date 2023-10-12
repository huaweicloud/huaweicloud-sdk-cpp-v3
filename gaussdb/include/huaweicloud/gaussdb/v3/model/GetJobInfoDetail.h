
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GetJobInfoDetail_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GetJobInfoDetail_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/GetJobEntitiesInfoDetail.h>
#include <huaweicloud/gaussdb/v3/model/GetJobInstanceInfoDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  GetJobInfoDetail
    : public ModelBase
{
public:
    GetJobInfoDetail();
    virtual ~GetJobInfoDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetJobInfoDetail members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 任务名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 任务执行状态。  取值： - 值为“Pending”，表示延时任务，未执行。 - 值为“Running”，表示任务正在执行。 - 值为“Completed”，表示任务执行成功。 - 值为“Failed”，表示任务执行失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 创建时间，格式为\&quot;yyyy-mm-ddThh:mm:ssZ\&quot;。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。  说明：创建时返回值为空，数据库实例创建成功后该值不为空。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 结束时间，格式为\&quot;yyyy-mm-ddThh:mm:ssZ\&quot;。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。  说明：创建时返回值为空，数据库实例创建成功后该值不为空。
    /// </summary>

    std::string getEnded() const;
    bool endedIsSet() const;
    void unsetended();
    void setEnded(const std::string& value);

    /// <summary>
    /// 任务执行进度。执行中状态才返回执行进度，例如60%，否则返回\&quot;\&quot;。
    /// </summary>

    std::string getProcess() const;
    bool processIsSet() const;
    void unsetprocess();
    void setProcess(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GetJobInstanceInfoDetail getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const GetJobInstanceInfoDetail& value);

    /// <summary>
    /// 
    /// </summary>

    GetJobEntitiesInfoDetail getEntities() const;
    bool entitiesIsSet() const;
    void unsetentities();
    void setEntities(const GetJobEntitiesInfoDetail& value);

    /// <summary>
    /// 任务执行失败时的错误信息。
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string ended_;
    bool endedIsSet_;
    std::string process_;
    bool processIsSet_;
    GetJobInstanceInfoDetail instance_;
    bool instanceIsSet_;
    GetJobEntitiesInfoDetail entities_;
    bool entitiesIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GetJobInfoDetail_H_
