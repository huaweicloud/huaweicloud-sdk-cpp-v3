
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ObjectCompareResult_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ObjectCompareResult_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/ObjectCompareResultDetails.h>
#include <string>
#include <huaweicloud/drs/v3/model/ObjectCompareResultOverview.h>
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
/// 
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ObjectCompareResult
    : public ModelBase
{
public:
    ObjectCompareResult();
    virtual ~ObjectCompareResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ObjectCompareResult members

    /// <summary>
    /// 对象级对比任务的id。
    /// </summary>

    std::string getCompareTaskId() const;
    bool compareTaskIdIsSet() const;
    void unsetcompareTaskId();
    void setCompareTaskId(const std::string& value);

    /// <summary>
    /// 对象对比结果概览。
    /// </summary>

    std::vector<ObjectCompareResultOverview>& getObjectCompareOverview();
    bool objectCompareOverviewIsSet() const;
    void unsetobjectCompareOverview();
    void setObjectCompareOverview(const std::vector<ObjectCompareResultOverview>& value);

    /// <summary>
    /// 对象对比结果详情。KEY值为对象对比结果概览中的对象类型。
    /// </summary>

    std::map<std::string, std::vector<ObjectCompareResultDetails>>& getObjectCompareDetails();
    bool objectCompareDetailsIsSet() const;
    void unsetobjectCompareDetails();
    void setObjectCompareDetails(const std::map<std::string, std::vector<ObjectCompareResultDetails>>& value);

    /// <summary>
    /// 错误码。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误信息。
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);


protected:
    std::string compareTaskId_;
    bool compareTaskIdIsSet_;
    std::vector<ObjectCompareResultOverview> objectCompareOverview_;
    bool objectCompareOverviewIsSet_;
    std::map<std::string, std::vector<ObjectCompareResultDetails>> objectCompareDetails_;
    bool objectCompareDetailsIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ObjectCompareResult_H_
