
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_BlockList_blocking_list_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_BlockList_blocking_list_H_


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
class HUAWEICLOUD_AAD_V1_EXPORT  BlockList_blocking_list
    : public ModelBase
{
public:
    BlockList_blocking_list();
    virtual ~BlockList_blocking_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BlockList_blocking_list members

    /// <summary>
    /// ip地址
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 封堵时间
    /// </summary>

    int64_t getBlockingTime() const;
    bool blockingTimeIsSet() const;
    void unsetblockingTime();
    void setBlockingTime(int64_t value);

    /// <summary>
    /// 预计解封时间
    /// </summary>

    int64_t getEstimatedUnblockingTime() const;
    bool estimatedUnblockingTimeIsSet() const;
    void unsetestimatedUnblockingTime();
    void setEstimatedUnblockingTime(int64_t value);

    /// <summary>
    /// 状态。unblocking：解封中；success：成功；failed：失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string ip_;
    bool ipIsSet_;
    int64_t blockingTime_;
    bool blockingTimeIsSet_;
    int64_t estimatedUnblockingTime_;
    bool estimatedUnblockingTimeIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_BlockList_blocking_list_H_
