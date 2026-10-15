
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DataFilterRuleReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DataFilterRuleReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/drs/v5/model/DataFilteringAdvancedSetting.h>
#include <huaweicloud/drs/v5/model/GeneralTransformationReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据过滤规则请求体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DataFilterRuleReq
    : public ModelBase
{
public:
    DataFilterRuleReq();
    virtual ~DataFilterRuleReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataFilterRuleReq members

    /// <summary>
    /// 数据过滤条件列表。包含需要校验的数据过滤规则信息，当data_filter_type为common（简单条件过滤）时，此参数为必填项。列表中的每个元素代表一组过滤条件，包含过滤对象列表和源库过滤条件SQL。包含以下关键字段：filter_object_list（过滤对象列表）/source_filter_condition（源库过滤条件SQL）。适用条件：data_filter_type&#x3D;common时必填。
    /// </summary>

    std::vector<GeneralTransformationReq>& getGeneralFilteringList();
    bool generalFilteringListIsSet() const;
    void unsetgeneralFilteringList();
    void setGeneralFilteringList(const std::vector<GeneralTransformationReq>& value);

    /// <summary>
    /// 数据过滤高级设置列表。用于配置关联表场景下的高级过滤规则，包含数据库名、表名、列名、索引等详细过滤配置。当前Mysql-Mysql、Mysql-TaurusDB、TaurusDB-TaurusDB、TaurusDB-Mysql、Mysql-MariaDB、MariaDB-Mysql、MariaDB-TaurusDBL链路支持此功能。适用条件：data_filter_type&#x3D;config时必填。
    /// </summary>

    std::vector<DataFilteringAdvancedSetting>& getAdvancedSettingList();
    bool advancedSettingListIsSet() const;
    void unsetadvancedSettingList();
    void setAdvancedSettingList(const std::vector<DataFilteringAdvancedSetting>& value);

    /// <summary>
    /// 校验请求的来源场景。用于区分数据过滤规则校验是来自数据同步任务执行场景，还是来自数据对比任务执行场景。 取值：job（数据同步任务执行时的过滤规则校验）/compare（数据对比任务执行时的过滤规则校验）
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// 数据过滤类型。用于指定数据过滤规则的模式，common表示简单条件过滤（单表过滤条件），config表示关联表过滤（多表关联条件过滤）。 取值：common（简单条件过滤）/config（关联表过滤）。 约束：当简单条件过滤是子查询时，需要先校验关联条件，关联条件校验成功之后，需要保存关联条件。
    /// </summary>

    std::string getDataFilterType() const;
    bool dataFilterTypeIsSet() const;
    void unsetdataFilterType();
    void setDataFilterType(const std::string& value);


protected:
    std::vector<GeneralTransformationReq> generalFilteringList_;
    bool generalFilteringListIsSet_;
    std::vector<DataFilteringAdvancedSetting> advancedSettingList_;
    bool advancedSettingListIsSet_;
    std::string source_;
    bool sourceIsSet_;
    std::string dataFilterType_;
    bool dataFilterTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DataFilterRuleReq_H_
