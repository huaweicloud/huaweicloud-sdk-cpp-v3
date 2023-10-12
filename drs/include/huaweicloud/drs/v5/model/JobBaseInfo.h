
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobBaseInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobBaseInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/ResourceTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建任务基本信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  JobBaseInfo
    : public ModelBase
{
public:
    JobBaseInfo();
    virtual ~JobBaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobBaseInfo members

    /// <summary>
    /// 任务名称。 约束：任务名称在4位到50位之间，不区分大小写，可以包含字母、数字、中划线或下划线，不能包括其他特殊字符。 - 最小长度：4 - 最大长度：50
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 任务场景。取值： - migration：实时迁移。 - sync：实时同步。 - cloudDataGuard：实时灾备。
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// 灾备类型是否双主灾备。说明： - job_type 是cloudDataGuard时，必填，灾备类型是双主灾备时，multi_write取值true, 否则为false。 - job_type 是其他类型时，multi_write是非必选参数。
    /// </summary>

    bool isMultiWrite() const;
    bool multiWriteIsSet() const;
    void unsetmultiWrite();
    void setMultiWrite(bool value);

    /// <summary>
    /// 引擎类型。取值： - oracle-to-gaussdbv5：Oracle同步到GaussDB分布式版，实时同步场景使用。
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// 迁移方向。取值： - up：入云 ，灾备场景时对应本云为备。 - down：出云，灾备场景时对应本云为主。 - non-dbs：自建。
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// 迁移模式。取值： - FULL_TRANS ：全量。 - FULL_INCR_TRANS：全量+增量。 - INCR_TRANS：增量。
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// 网络类型。取值： - eip：公网网络。 - vpc：VPC网络，灾备场景不支持选择VPC网络。 - vpn：VPN、专线网络。
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// 计费模式，默认按需。取值： - period：包周期。 - on_demand：按需。
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// 企业项目ID。 缺省值：\&quot;0\&quot;，表示\&quot;default\&quot;企业项目。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 任务描述。 约束：任务描述不能超过256位，且不能包含!&lt;&gt;&amp;&#39;\&quot;\\特殊字符。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 任务定时启动时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 任务处于异常状态一段时间后，将会自动结束。单位为天。(范围14-100)，不传默认为14天。
    /// </summary>

    std::string getExpiredDays() const;
    bool expiredDaysIsSet() const;
    void unsetexpiredDays();
    void setExpiredDays(const std::string& value);

    /// <summary>
    /// 标签信息，最多添加10个标签。
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    bool multiWrite_;
    bool multiWriteIsSet_;
    std::string engineType_;
    bool engineTypeIsSet_;
    std::string jobDirection_;
    bool jobDirectionIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string netType_;
    bool netTypeIsSet_;
    std::string chargingMode_;
    bool chargingModeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string expiredDays_;
    bool expiredDaysIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_JobBaseInfo_H_
