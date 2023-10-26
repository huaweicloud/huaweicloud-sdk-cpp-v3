
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_CleanLimitDict_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_CleanLimitDict_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 连接数限制列表
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  CleanLimitDict
    : public ModelBase
{
public:
    CleanLimitDict();
    virtual ~CleanLimitDict();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CleanLimitDict members

    /// <summary>
    /// 清洗时访问限制分段ID
    /// </summary>

    int64_t getCleaningAccessPosId() const;
    bool cleaningAccessPosIdIsSet() const;
    void unsetcleaningAccessPosId();
    void setCleaningAccessPosId(int64_t value);

    /// <summary>
    /// 单一源IP新建连接个数
    /// </summary>

    int64_t getNewConnectionLimited() const;
    bool newConnectionLimitedIsSet() const;
    void unsetnewConnectionLimited();
    void setNewConnectionLimited(int64_t value);

    /// <summary>
    /// 单一源IP连接数总个数
    /// </summary>

    int64_t getTotalConnectionLimited() const;
    bool totalConnectionLimitedIsSet() const;
    void unsettotalConnectionLimited();
    void setTotalConnectionLimited(int64_t value);


protected:
    int64_t cleaningAccessPosId_;
    bool cleaningAccessPosIdIsSet_;
    int64_t newConnectionLimited_;
    bool newConnectionLimitedIsSet_;
    int64_t totalConnectionLimited_;
    bool totalConnectionLimitedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_CleanLimitDict_H_
