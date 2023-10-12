
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListLogtankResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListLogtankResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/LogtankItem.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListLogtankResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLogtankResponse();
    virtual ~ListLogtankResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLogtankResponse members

    /// <summary>
    /// 请求的唯一标识
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 云日志信息数量
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 云日志信息列表
    /// </summary>

    std::vector<LogtankItem>& getLogtanks();
    bool logtanksIsSet() const;
    void unsetlogtanks();
    void setLogtanks(const std::vector<LogtankItem>& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::vector<LogtankItem> logtanks_;
    bool logtanksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListLogtankResponse_H_
