
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateDataLevelCompareReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateDataLevelCompareReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/CompareObjectInfoWithToken.h>
#include <string>
#include <huaweicloud/drs/v3/model/CompareObjectInfo.h>
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
class HUAWEICLOUD_DRS_V3_EXPORT  CreateDataLevelCompareReq
    : public ModelBase
{
public:
    CreateDataLevelCompareReq();
    virtual ~CreateDataLevelCompareReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateDataLevelCompareReq members

    /// <summary>
    /// 一个任务只允许有一个未完成的数据级对比任务，该字段决定对未完成数据级对比任务的处理方式。cancel-取消后重新创建,keep-保持未完成的不再创建。
    /// </summary>

    std::string getConflictPolicy() const;
    bool conflictPolicyIsSet() const;
    void unsetconflictPolicy();
    void setConflictPolicy(const std::string& value);

    /// <summary>
    /// 数据级对比类型，lines-行对比,contents-内容对比。
    /// </summary>

    std::string getCompareType() const;
    bool compareTypeIsSet() const;
    void unsetcompareType();
    void setCompareType(const std::string& value);

    /// <summary>
    /// 数据级对比模式，取值为空时需要在compare_object_infos或者compare_object_infos_with_token传对象信息，quick_comparison-快速对比，需要加入该功能的白名单才能使用。
    /// </summary>

    std::string getCompareMode() const;
    bool compareModeIsSet() const;
    void unsetcompareMode();
    void setCompareMode(const std::string& value);

    /// <summary>
    /// 对比任务启动时间，取值为空代表立即启动。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 数据级对比的对象。非“快速对比”模式时，compare_object_infos和compare_object_infos_with_token根据链路二选一传值，不允许都为空。
    /// </summary>

    std::vector<CompareObjectInfo>& getCompareObjectInfos();
    bool compareObjectInfosIsSet() const;
    void unsetcompareObjectInfos();
    void setCompareObjectInfos(const std::vector<CompareObjectInfo>& value);

    /// <summary>
    /// 数据级对比的对象（Cassandra灾备专用，带token信息）。非“快速对比”模式时，compare_object_infos和compare_object_infos_with_token根据链路二选一传值，不允许都为空。
    /// </summary>

    std::vector<CompareObjectInfoWithToken>& getCompareObjectInfosWithToken();
    bool compareObjectInfosWithTokenIsSet() const;
    void unsetcompareObjectInfosWithToken();
    void setCompareObjectInfosWithToken(const std::vector<CompareObjectInfoWithToken>& value);


protected:
    std::string conflictPolicy_;
    bool conflictPolicyIsSet_;
    std::string compareType_;
    bool compareTypeIsSet_;
    std::string compareMode_;
    bool compareModeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::vector<CompareObjectInfo> compareObjectInfos_;
    bool compareObjectInfosIsSet_;
    std::vector<CompareObjectInfoWithToken> compareObjectInfosWithToken_;
    bool compareObjectInfosWithTokenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateDataLevelCompareReq_H_
