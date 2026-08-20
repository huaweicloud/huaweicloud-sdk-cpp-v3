
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ExportTaskVo_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ExportTaskVo_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 导出任务请求参数
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ExportTaskVo
    : public ModelBase
{
public:
    ExportTaskVo();
    virtual ~ExportTaskVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportTaskVo members

    /// <summary>
    /// **参数解释：** 导出数据类型 **约束限制：** 不涉及 **取值范围：** - reports_detail：基础话单数据导出 - top_url_detail：TOP URL数据导出 - top_ua_detail：TOP UA数据导出 - top_referer_detail：TOP referer数据导出 - top_ip_detail：TOP IP数据导出 - isp_detail：运营商数据导出, - top_path_detail： TOP path数据导出, - uv：UV数据导出 **默认取值：** 不涉及
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释：** 订阅的域名列表 &gt; 支持同时输入多个域名  **约束限制：** 不涉及 **取值范围：** - 多个域名用半角逗号（,）分隔 - 如果该参数为all，则为账号下的所有域名订阅运营报表 **默认取值：** 不涉及
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// **参数解释：** 导出起始时间 **约束限制：** 不涉及 **取值范围：** 相对于UTC 1970-01-01到当前时间相隔的毫秒数 **默认取值：** 不涉及
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释：** 导出结束时间 **约束限制：** 不涉及 **取值范围：** 相对于UTC 1970-01-01到当前时间相隔的毫秒数 **默认取值：** 不涉及
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释：** 数据分组方式 **约束限制：** 不涉及 **取值范围：** domain：按域名分组 **默认取值：** 默认不分组
    /// </summary>

    std::string getGroupBy() const;
    bool groupByIsSet() const;
    void unsetgroupBy();
    void setGroupBy(const std::string& value);

    /// <summary>
    /// **参数解释：** 查询时间粒度 **约束限制：** 当导出时间跨度超过90天时，仅支持1小时粒度（3600） **取值范围：** - 300：采样时间间隔为5分钟，单位：秒 - 3600：采样时间间隔为1小时，单位：秒 **默认取值：** 不涉及
    /// </summary>

    int64_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int64_t value);

    /// <summary>
    /// **参数解释：** 服务范围 **约束限制：** 服务范围为中国大陆或全球时，加速域名需要到工信部备案 **取值范围：** - mainland_china：中国大陆 - outside_mainland_china：中国大陆境外 - global：全球 **默认取值：** mainland_china：中国大陆
    /// </summary>

    std::string getServiceArea() const;
    bool serviceAreaIsSet() const;
    void unsetserviceArea();
    void setServiceArea(const std::string& value);

    /// <summary>
    /// **参数解释：** 统计指标类型 **约束限制：** 不涉及 **取值范围：** - flux：流量 - req_num：请求总数 **默认取值：** 不涉及
    /// </summary>

    std::string getStatType() const;
    bool statTypeIsSet() const;
    void unsetstatType();
    void setStatType(const std::string& value);

    /// <summary>
    /// **参数解释：** 国家&amp;地区编码 **约束限制：** - 查询运营商统计数据时，不传该参数 - 查询top_url数据时，不传该参数 - 查询区域情况数据时，该参数传cn（中国） **取值范围：** - 多个以英文逗号分隔 - all表示全部，取值见附录 **默认取值：** 不涉及
    /// </summary>

    std::string getCountry() const;
    bool countryIsSet() const;
    void unsetcountry();
    void setCountry(const std::string& value);

    /// <summary>
    /// **参数解释：** 省份编码： **约束限制：** 当country为cn（中国）时，该参数有效 **取值范围：** all表示全部，取值见附录 **默认取值：** 不涉及
    /// </summary>

    std::string getProvince() const;
    bool provinceIsSet() const;
    void unsetprovince();
    void setProvince(const std::string& value);

    /// <summary>
    /// **参数解释：** 运营商名称 &gt; 如果IP归属地未知，该字段返回null  **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getIsp() const;
    bool ispIsSet() const;
    void unsetisp();
    void setIsp(const std::string& value);

    /// <summary>
    /// **参数解释：** 语言 **约束限制：** 不涉及 **取值范围：** - zh：中文 - en：英文 **默认取值：** zh：中文
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string groupBy_;
    bool groupByIsSet_;
    int64_t interval_;
    bool intervalIsSet_;
    std::string serviceArea_;
    bool serviceAreaIsSet_;
    std::string statType_;
    bool statTypeIsSet_;
    std::string country_;
    bool countryIsSet_;
    std::string province_;
    bool provinceIsSet_;
    std::string isp_;
    bool ispIsSet_;
    std::string language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ExportTaskVo_H_
