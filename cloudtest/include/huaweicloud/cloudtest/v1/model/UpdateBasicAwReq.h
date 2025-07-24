
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateBasicAwReq_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateBasicAwReq_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/AwVariable.h>
#include <huaweicloud/cloudtest/v1/model/AwParam.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/CheckPoint.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  UpdateBasicAwReq
    : public ModelBase
{
public:
    UpdateBasicAwReq();
    virtual ~UpdateBasicAwReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateBasicAwReq members

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 默认检查点List
    /// </summary>

    std::vector<CheckPoint>& getDftCheckPointList();
    bool dftCheckPointListIsSet() const;
    void unsetdftCheckPointList();
    void setDftCheckPointList(const std::vector<CheckPoint>& value);

    /// <summary>
    /// AW参数类list
    /// </summary>

    std::vector<AwParam>& getDftCustomHeader();
    bool dftCustomHeaderIsSet() const;
    void unsetdftCustomHeader();
    void setDftCustomHeader(const std::vector<AwParam>& value);

    /// <summary>
    /// 重试间隔时间 (ms) 为空表示不等待(目前内部使用)
    /// </summary>

    std::string getDftRetryInterval() const;
    bool dftRetryIntervalIsSet() const;
    void unsetdftRetryInterval();
    void setDftRetryInterval(const std::string& value);

    /// <summary>
    /// 重试次数(目前内部使用)
    /// </summary>

    std::string getDftRetryTimes() const;
    bool dftRetryTimesIsSet() const;
    void unsetdftRetryTimes();
    void setDftRetryTimes(const std::string& value);

    /// <summary>
    /// 定义的变量信息
    /// </summary>

    std::vector<AwVariable>& getDftVariableList();
    bool dftVariableListIsSet() const;
    void unsetdftVariableList();
    void setDftVariableList(const std::vector<AwVariable>& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数类型和参数默认值对应List
    /// </summary>

    std::vector<AwParam>& getParamTypeAndDftValue();
    bool paramTypeAndDftValueIsSet() const;
    void unsetparamTypeAndDftValue();
    void setParamTypeAndDftValue(const std::vector<AwParam>& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::vector<CheckPoint> dftCheckPointList_;
    bool dftCheckPointListIsSet_;
    std::vector<AwParam> dftCustomHeader_;
    bool dftCustomHeaderIsSet_;
    std::string dftRetryInterval_;
    bool dftRetryIntervalIsSet_;
    std::string dftRetryTimes_;
    bool dftRetryTimesIsSet_;
    std::vector<AwVariable> dftVariableList_;
    bool dftVariableListIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<AwParam> paramTypeAndDftValue_;
    bool paramTypeAndDftValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateBasicAwReq_H_
