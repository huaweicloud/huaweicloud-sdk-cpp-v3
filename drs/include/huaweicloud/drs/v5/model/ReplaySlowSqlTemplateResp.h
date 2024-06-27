
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplaySlowSqlTemplateResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplaySlowSqlTemplateResp_H_


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
/// 慢SQL统计信息数据项
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ReplaySlowSqlTemplateResp
    : public ModelBase
{
public:
    ReplaySlowSqlTemplateResp();
    virtual ~ReplaySlowSqlTemplateResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplaySlowSqlTemplateResp members

    /// <summary>
    /// SQL语句模板
    /// </summary>

    std::string getSqlTemplate() const;
    bool sqlTemplateIsSet() const;
    void unsetsqlTemplate();
    void setSqlTemplate(const std::string& value);

    /// <summary>
    /// SQL语句模板MD5
    /// </summary>

    std::string getSqlTemplateMd5() const;
    bool sqlTemplateMd5IsSet() const;
    void unsetsqlTemplateMd5();
    void setSqlTemplateMd5(const std::string& value);

    /// <summary>
    /// 目标库别名
    /// </summary>

    std::string getTargetName() const;
    bool targetNameIsSet() const;
    void unsettargetName();
    void setTargetName(const std::string& value);

    /// <summary>
    /// schema名称
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// SQL类型
    /// </summary>

    std::string getQueryType() const;
    bool queryTypeIsSet() const;
    void unsetqueryType();
    void setQueryType(const std::string& value);

    /// <summary>
    /// SQL执行最小耗时
    /// </summary>

    int64_t getMinLatency() const;
    bool minLatencyIsSet() const;
    void unsetminLatency();
    void setMinLatency(int64_t value);

    /// <summary>
    /// SQL执行最大耗时
    /// </summary>

    int64_t getMaxLatency() const;
    bool maxLatencyIsSet() const;
    void unsetmaxLatency();
    void setMaxLatency(int64_t value);

    /// <summary>
    /// SQL执行平均耗时
    /// </summary>

    int64_t getAvgLatency() const;
    bool avgLatencyIsSet() const;
    void unsetavgLatency();
    void setAvgLatency(int64_t value);

    /// <summary>
    /// SQL执行总的耗时
    /// </summary>

    int64_t getTotalLatency() const;
    bool totalLatencyIsSet() const;
    void unsettotalLatency();
    void setTotalLatency(int64_t value);

    /// <summary>
    /// 目标库类型
    /// </summary>

    std::string getTargetType() const;
    bool targetTypeIsSet() const;
    void unsettargetType();
    void setTargetType(const std::string& value);

    /// <summary>
    /// SQL数量
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);


protected:
    std::string sqlTemplate_;
    bool sqlTemplateIsSet_;
    std::string sqlTemplateMd5_;
    bool sqlTemplateMd5IsSet_;
    std::string targetName_;
    bool targetNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string queryType_;
    bool queryTypeIsSet_;
    int64_t minLatency_;
    bool minLatencyIsSet_;
    int64_t maxLatency_;
    bool maxLatencyIsSet_;
    int64_t avgLatency_;
    bool avgLatencyIsSet_;
    int64_t totalLatency_;
    bool totalLatencyIsSet_;
    std::string targetType_;
    bool targetTypeIsSet_;
    int64_t count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplaySlowSqlTemplateResp_H_
