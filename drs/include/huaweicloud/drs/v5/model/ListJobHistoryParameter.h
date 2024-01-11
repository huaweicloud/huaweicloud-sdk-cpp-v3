
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListJobHistoryParameter_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListJobHistoryParameter_H_


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
/// 任务参数配置历史修改响应体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ListJobHistoryParameter
    : public ModelBase
{
public:
    ListJobHistoryParameter();
    virtual ~ListJobHistoryParameter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJobHistoryParameter members

    /// <summary>
    /// 参数名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 旧参数值。
    /// </summary>

    std::string getOldValue() const;
    bool oldValueIsSet() const;
    void unsetoldValue();
    void setOldValue(const std::string& value);

    /// <summary>
    /// 新参数值。
    /// </summary>

    std::string getNewValue() const;
    bool newValueIsSet() const;
    void unsetnewValue();
    void setNewValue(const std::string& value);

    /// <summary>
    /// 更新结果。true：成功，false：失败
    /// </summary>

    bool isIsUpdateSuccess() const;
    bool isUpdateSuccessIsSet() const;
    void unsetisUpdateSuccess();
    void setIsUpdateSuccess(bool value);

    /// <summary>
    /// 是否已应用。true：已应用，false：未应用
    /// </summary>

    bool isIsApplied() const;
    bool isAppliedIsSet() const;
    void unsetisApplied();
    void setIsApplied(bool value);

    /// <summary>
    /// 参数修改时间。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 参数应用时间。
    /// </summary>

    std::string getApplyTime() const;
    bool applyTimeIsSet() const;
    void unsetapplyTime();
    void setApplyTime(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string oldValue_;
    bool oldValueIsSet_;
    std::string newValue_;
    bool newValueIsSet_;
    bool isUpdateSuccess_;
    bool isUpdateSuccessIsSet_;
    bool isApplied_;
    bool isAppliedIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string applyTime_;
    bool applyTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListJobHistoryParameter_H_
