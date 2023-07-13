
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoBckup_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoBckup_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  OpExtendInfoBckup
    : public ModelBase
{
public:
    OpExtendInfoBckup();
    virtual ~OpExtendInfoBckup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OpExtendInfoBckup members

    /// <summary>
    /// 应用一致性备份失败错误码。请参见[错误码](ErrorCode.xml)。
    /// </summary>

    std::string getAppConsistencyErrorCode() const;
    bool appConsistencyErrorCodeIsSet() const;
    void unsetappConsistencyErrorCode();
    void setAppConsistencyErrorCode(const std::string& value);

    /// <summary>
    /// 应用一致性备份错误信息
    /// </summary>

    std::string getAppConsistencyErrorMessage() const;
    bool appConsistencyErrorMessageIsSet() const;
    void unsetappConsistencyErrorMessage();
    void setAppConsistencyErrorMessage(const std::string& value);

    /// <summary>
    /// 应用一致性备份状态；0:非应用一致性，1：应用一致性备份
    /// </summary>

    std::string getAppConsistencyStatus() const;
    bool appConsistencyStatusIsSet() const;
    void unsetappConsistencyStatus();
    void setAppConsistencyStatus(const std::string& value);

    /// <summary>
    /// 备份副本ID
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 备份名称
    /// </summary>

    std::string getBackupName() const;
    bool backupNameIsSet() const;
    void unsetbackupName();
    void setBackupName(const std::string& value);

    /// <summary>
    /// 是否增备
    /// </summary>

    std::string getIncremental() const;
    bool incrementalIsSet() const;
    void unsetincremental();
    void setIncremental(const std::string& value);


protected:
    std::string appConsistencyErrorCode_;
    bool appConsistencyErrorCodeIsSet_;
    std::string appConsistencyErrorMessage_;
    bool appConsistencyErrorMessageIsSet_;
    std::string appConsistencyStatus_;
    bool appConsistencyStatusIsSet_;
    std::string backupId_;
    bool backupIdIsSet_;
    std::string backupName_;
    bool backupNameIsSet_;
    std::string incremental_;
    bool incrementalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_OpExtendInfoBckup_H_
