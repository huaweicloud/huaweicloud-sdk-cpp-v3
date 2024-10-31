
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListNodeLimitSqlModelResponseResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListNodeLimitSqlModelResponseResult_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListNodeLimitSqlModelResponseResult
    : public ModelBase
{
public:
    ListNodeLimitSqlModelResponseResult();
    virtual ~ListNodeLimitSqlModelResponseResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListNodeLimitSqlModelResponseResult members

    /// <summary>
    /// 限流任务SQL_ID。
    /// </summary>

    std::string getSqlId() const;
    bool sqlIdIsSet() const;
    void unsetsqlId();
    void setSqlId(const std::string& value);

    /// <summary>
    /// 限流任务SQL模板。
    /// </summary>

    std::string getSqlModel() const;
    bool sqlModelIsSet() const;
    void unsetsqlModel();
    void setSqlModel(const std::string& value);


protected:
    std::string sqlId_;
    bool sqlIdIsSet_;
    std::string sqlModel_;
    bool sqlModelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListNodeLimitSqlModelResponseResult_H_
