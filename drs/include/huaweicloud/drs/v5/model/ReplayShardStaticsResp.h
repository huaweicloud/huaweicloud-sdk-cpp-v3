
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayShardStaticsResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayShardStaticsResp_H_


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
/// 回放概览信息基于进间点的统计结果
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ReplayShardStaticsResp
    : public ModelBase
{
public:
    ReplayShardStaticsResp();
    virtual ~ReplayShardStaticsResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplayShardStaticsResp members

    /// <summary>
    /// 回放时间点
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// SQL总量
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);

    /// <summary>
    /// SQL执行量
    /// </summary>

    int64_t getFinish() const;
    bool finishIsSet() const;
    void unsetfinish();
    void setFinish(int64_t value);

    /// <summary>
    /// SQL异常量
    /// </summary>

    int64_t getAbnormal() const;
    bool abnormalIsSet() const;
    void unsetabnormal();
    void setAbnormal(int64_t value);

    /// <summary>
    /// 慢SQL数量
    /// </summary>

    int64_t getSlow() const;
    bool slowIsSet() const;
    void unsetslow();
    void setSlow(int64_t value);


protected:
    std::string time_;
    bool timeIsSet_;
    int64_t total_;
    bool totalIsSet_;
    int64_t finish_;
    bool finishIsSet_;
    int64_t abnormal_;
    bool abnormalIsSet_;
    int64_t slow_;
    bool slowIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayShardStaticsResp_H_
