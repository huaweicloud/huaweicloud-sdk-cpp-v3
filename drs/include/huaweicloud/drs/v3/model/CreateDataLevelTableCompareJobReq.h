
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateDataLevelTableCompareJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateDataLevelTableCompareJobReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/CompareObjectInfoWithToken.h>
#include <huaweicloud/drs/v3/model/AddDataTransformationReq.h>
#include <string>
#include <huaweicloud/drs/v3/model/CompareObjectInfo.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建数据级对比任务请求
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  CreateDataLevelTableCompareJobReq
    : public ModelBase
{
public:
    CreateDataLevelTableCompareJobReq();
    virtual ~CreateDataLevelTableCompareJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDataLevelTableCompareJobReq members

    /// <summary>
    /// 对比类型。 - lines：行数对比 - contents：内容对比 - random：抽样对比，当前仅支持gaussdbv5、gaussdbv5-to-postgresql、gaussdbv5ha-to-postgresql链路。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 对比任务启动时间，时间戳格式，取值为空代表立即启动。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 数据级对比模式，取值为空时需要在compare_object或者compare_object_with_token传对象信息，quick_comparison-快速对比。 取值：quick_comparison
    /// </summary>

    std::string getCompareMode() const;
    bool compareModeIsSet() const;
    void unsetcompareMode();
    void setCompareMode(const std::string& value);

    /// <summary>
    /// 数据级对比的对象。
    /// </summary>

    std::vector<CompareObjectInfo>& getCompareObject();
    bool compareObjectIsSet() const;
    void unsetcompareObject();
    void setCompareObject(const std::vector<CompareObjectInfo>& value);

    /// <summary>
    /// 对比配置项，key-value形式。 内容对比支持以下配置项： - 对比方式配置，key：contentCompareType，value：dynamic表示动态对比，static表示静态对比。 - lob字段对比类型配置，key：lobCompare，value：ignore表示忽略，length表示长度对比。  行数对比支持以下配置项： - 对比策略配置，多表归一情况下适用，key：comparePolicy，value：normal表示正常对比，manyToOne表示多对一对比。
    /// </summary>

    std::map<std::string, std::string>& getOptions();
    bool optionsIsSet() const;
    void unsetoptions();
    void setOptions(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 数据级对比的对象（Cassandra灾备专用，带token信息）。
    /// </summary>

    std::vector<CompareObjectInfoWithToken>& getCompareObjectWithToken();
    bool compareObjectWithTokenIsSet() const;
    void unsetcompareObjectWithToken();
    void setCompareObjectWithToken(const std::vector<CompareObjectInfoWithToken>& value);

    /// <summary>
    /// 对比任务线程数量，当前仅cloudDataGuard-cassandra和cloudDataGuard-gausscassandra-to-gausscassandra链路支持。
    /// </summary>

    int32_t getCompareTaskNum() const;
    bool compareTaskNumIsSet() const;
    void unsetcompareTaskNum();
    void setCompareTaskNum(int32_t value);

    /// <summary>
    /// 过滤数据信息。
    /// </summary>

    std::vector<AddDataTransformationReq>& getCompareTransformationInfos();
    bool compareTransformationInfosIsSet() const;
    void unsetcompareTransformationInfos();
    void setCompareTransformationInfos(const std::vector<AddDataTransformationReq>& value);

    /// <summary>
    /// 抽样比例，对比类型为抽样对比时填写。
    /// </summary>

    double getProportionValue() const;
    bool proportionValueIsSet() const;
    void unsetproportionValue();
    void setProportionValue(double value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string compareMode_;
    bool compareModeIsSet_;
    std::vector<CompareObjectInfo> compareObject_;
    bool compareObjectIsSet_;
    std::map<std::string, std::string> options_;
    bool optionsIsSet_;
    std::vector<CompareObjectInfoWithToken> compareObjectWithToken_;
    bool compareObjectWithTokenIsSet_;
    int32_t compareTaskNum_;
    bool compareTaskNumIsSet_;
    std::vector<AddDataTransformationReq> compareTransformationInfos_;
    bool compareTransformationInfosIsSet_;
    double proportionValue_;
    bool proportionValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateDataLevelTableCompareJobReq_H_
