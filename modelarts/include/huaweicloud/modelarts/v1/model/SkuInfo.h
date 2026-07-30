
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SkuInfo_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SkuInfo_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 计费信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SkuInfo
    : public ModelBase
{
public:
    SkuInfo();
    virtual ~SkuInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SkuInfo members

    /// <summary>
    /// 计费码。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 计费时期。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 查询次数。
    /// </summary>

    int64_t getQueriesLimit() const;
    bool queriesLimitIsSet() const;
    void unsetqueriesLimit();
    void setQueriesLimit(int64_t value);

    /// <summary>
    /// 价格。
    /// </summary>

    float getPrice() const;
    bool priceIsSet() const;
    void unsetprice();
    void setPrice(float value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string period_;
    bool periodIsSet_;
    int64_t queriesLimit_;
    bool queriesLimitIsSet_;
    float price_;
    bool priceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SkuInfo_H_
