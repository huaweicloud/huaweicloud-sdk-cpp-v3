
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateLimitTaskNodeResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateLimitTaskNodeResult_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  CreateLimitTaskNodeResult
    : public ModelBase
{
public:
    CreateLimitTaskNodeResult();
    virtual ~CreateLimitTaskNodeResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateLimitTaskNodeResult members

    /// <summary>
    /// 节点id。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 该节点执行的sql语句id。
    /// </summary>

    std::string getSqlId() const;
    bool sqlIdIsSet() const;
    void unsetsqlId();
    void setSqlId(const std::string& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string sqlId_;
    bool sqlIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateLimitTaskNodeResult_H_
