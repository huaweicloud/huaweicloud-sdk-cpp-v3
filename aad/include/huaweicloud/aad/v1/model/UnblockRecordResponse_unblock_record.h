
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_UnblockRecordResponse_unblock_record_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_UnblockRecordResponse_unblock_record_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  UnblockRecordResponse_unblock_record
    : public ModelBase
{
public:
    UnblockRecordResponse_unblock_record();
    virtual ~UnblockRecordResponse_unblock_record();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnblockRecordResponse_unblock_record members

    /// <summary>
    /// ip地址
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 执行者
    /// </summary>

    std::string getExecutor() const;
    bool executorIsSet() const;
    void unsetexecutor();
    void setExecutor(const std::string& value);

    /// <summary>
    /// 封堵id
    /// </summary>

    int64_t getBlockId() const;
    bool blockIdIsSet() const;
    void unsetblockId();
    void setBlockId(int64_t value);

    /// <summary>
    /// 封堵时间
    /// </summary>

    int64_t getBlockingTime() const;
    bool blockingTimeIsSet() const;
    void unsetblockingTime();
    void setBlockingTime(int64_t value);

    /// <summary>
    /// 解封时间
    /// </summary>

    int64_t getUnblockingTime() const;
    bool unblockingTimeIsSet() const;
    void unsetunblockingTime();
    void setUnblockingTime(int64_t value);

    /// <summary>
    /// 解封类型。manual：人工；automatic：自动
    /// </summary>

    std::string getUnblockType() const;
    bool unblockTypeIsSet() const;
    void unsetunblockType();
    void setUnblockType(const std::string& value);

    /// <summary>
    /// 状态。unblocking：解封中；success：成功；failed：失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 时间
    /// </summary>

    int64_t getSortTime() const;
    bool sortTimeIsSet() const;
    void unsetsortTime();
    void setSortTime(int64_t value);


protected:
    std::string ip_;
    bool ipIsSet_;
    std::string executor_;
    bool executorIsSet_;
    int64_t blockId_;
    bool blockIdIsSet_;
    int64_t blockingTime_;
    bool blockingTimeIsSet_;
    int64_t unblockingTime_;
    bool unblockingTimeIsSet_;
    std::string unblockType_;
    bool unblockTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    int64_t sortTime_;
    bool sortTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_UnblockRecordResponse_unblock_record_H_
