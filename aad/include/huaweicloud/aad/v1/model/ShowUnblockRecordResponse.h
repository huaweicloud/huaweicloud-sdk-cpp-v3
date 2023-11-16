
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ShowUnblockRecordResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ShowUnblockRecordResponse_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/UnblockRecordResponse_unblock_record.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  ShowUnblockRecordResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowUnblockRecordResponse();
    virtual ~ShowUnblockRecordResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUnblockRecordResponse members

    /// <summary>
    /// 解封记录
    /// </summary>

    std::vector<UnblockRecordResponse_unblock_record>& getUnblockRecord();
    bool unblockRecordIsSet() const;
    void unsetunblockRecord();
    void setUnblockRecord(const std::vector<UnblockRecordResponse_unblock_record>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 租户id
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);


protected:
    std::vector<UnblockRecordResponse_unblock_record> unblockRecord_;
    bool unblockRecordIsSet_;
    int32_t total_;
    bool totalIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ShowUnblockRecordResponse_H_
