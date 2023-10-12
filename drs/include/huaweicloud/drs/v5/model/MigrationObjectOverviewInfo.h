
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_MigrationObjectOverviewInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_MigrationObjectOverviewInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 迁移详情概览。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  MigrationObjectOverviewInfo
    : public ModelBase
{
public:
    MigrationObjectOverviewInfo();
    virtual ~MigrationObjectOverviewInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MigrationObjectOverviewInfo members

    /// <summary>
    /// 类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 待迁移数量。
    /// </summary>

    std::string getSrcCount() const;
    bool srcCountIsSet() const;
    void unsetsrcCount();
    void setSrcCount(const std::string& value);

    /// <summary>
    /// 已迁移数量。
    /// </summary>

    std::string getDstCount() const;
    bool dstCountIsSet() const;
    void unsetdstCount();
    void setDstCount(const std::string& value);

    /// <summary>
    /// 状态.
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 开始时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string srcCount_;
    bool srcCountIsSet_;
    std::string dstCount_;
    bool dstCountIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_MigrationObjectOverviewInfo_H_
