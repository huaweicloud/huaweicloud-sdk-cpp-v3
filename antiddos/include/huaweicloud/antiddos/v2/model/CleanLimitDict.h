
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_CleanLimitDict_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_CleanLimitDict_H_


#include <huaweicloud/antiddos/v2/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 连接数限制列表
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V2_EXPORT  CleanLimitDict
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
    /// 清洗时访问限制分段ID，取值范围：1：10M;2：30M;3：50M;4：70M;5：100M;6：150M;7：200M;8：250M;9：300M;10：500M;11：800M;88：1000M;99：默认防护。
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

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V2_MODEL_CleanLimitDict_H_
