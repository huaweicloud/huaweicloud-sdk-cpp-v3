
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SessionMemoryContextInfoResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SessionMemoryContextInfoResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  SessionMemoryContextInfoResult
    : public ModelBase
{
public:
    SessionMemoryContextInfoResult();
    virtual ~SessionMemoryContextInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SessionMemoryContextInfoResult members

    /// <summary>
    /// **参数解释**: 内存上下文名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getContextName() const;
    bool contextNameIsSet() const;
    void unsetcontextName();
    void setContextName(const std::string& value);

    /// <summary>
    /// **参数解释**: 会话上下文数量。 **取值范围**: 大于等于0。
    /// </summary>

    int32_t getAmount() const;
    bool amountIsSet() const;
    void unsetamount();
    void setAmount(int32_t value);

    /// <summary>
    /// **参数解释**: 会话上下文总大小。 **取值范围**: 大于等于0。
    /// </summary>

    double getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(double value);


protected:
    std::string contextName_;
    bool contextNameIsSet_;
    int32_t amount_;
    bool amountIsSet_;
    double size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_SessionMemoryContextInfoResult_H_
