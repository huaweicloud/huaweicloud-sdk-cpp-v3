
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RecycleBackupV3_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RecycleBackupV3_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  RecycleBackupV3
    : public ModelBase
{
public:
    RecycleBackupV3();
    virtual ~RecycleBackupV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecycleBackupV3 members

    /// <summary>
    /// 备份级别。
    /// </summary>

    std::string getBackupLevel() const;
    bool backupLevelIsSet() const;
    void unsetbackupLevel();
    void setBackupLevel(const std::string& value);

    /// <summary>
    /// 备份ID。
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 备份名称。
    /// </summary>

    std::string getBackupName() const;
    bool backupNameIsSet() const;
    void unsetbackupName();
    void setBackupName(const std::string& value);

    /// <summary>
    /// 备份大小，单位是字节。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 回收状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 备份开始时间。
    /// </summary>

    int64_t getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(int64_t value);

    /// <summary>
    /// 备份结束时间。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);


protected:
    std::string backupLevel_;
    bool backupLevelIsSet_;
    std::string backupId_;
    bool backupIdIsSet_;
    std::string backupName_;
    bool backupNameIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string status_;
    bool statusIsSet_;
    int64_t beginTime_;
    bool beginTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RecycleBackupV3_H_
