
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ExportCompareResultReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ExportCompareResultReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 生成对比任务结果文件请求体。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ExportCompareResultReq
    : public ModelBase
{
public:
    ExportCompareResultReq();
    virtual ~ExportCompareResultReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportCompareResultReq members

    /// <summary>
    /// 对比任务类型： - contents： 内容对比。 - lines：行数对比。 - random：抽样对比。 - objects_comparison：对象对比。
    /// </summary>

    std::string getCompareType() const;
    bool compareTypeIsSet() const;
    void unsetcompareType();
    void setCompareType(const std::string& value);

    /// <summary>
    /// 对比任务的ID，内容对比、抽样对比、行数对比场景必填。
    /// </summary>

    std::string getCompareJobId() const;
    bool compareJobIdIsSet() const;
    void unsetcompareJobId();
    void setCompareJobId(const std::string& value);

    /// <summary>
    /// 时区，如GMT+08:00，用于生成当前时间标识，拼接到文件名称中。
    /// </summary>

    std::string getTimeZone() const;
    bool timeZoneIsSet() const;
    void unsettimeZone();
    void setTimeZone(const std::string& value);


protected:
    std::string compareType_;
    bool compareTypeIsSet_;
    std::string compareJobId_;
    bool compareJobIdIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ExportCompareResultReq_H_
