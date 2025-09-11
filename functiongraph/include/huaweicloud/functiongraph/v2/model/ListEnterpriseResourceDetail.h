
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListEnterpriseResourceDetail_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListEnterpriseResourceDetail_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListEnterpriseResourceDetail
    : public ModelBase
{
public:
    ListEnterpriseResourceDetail();
    virtual ~ListEnterpriseResourceDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEnterpriseResourceDetail members

    /// <summary>
    /// 函数urn
    /// </summary>

    std::string getDetailId() const;
    bool detailIdIsSet() const;
    void unsetdetailId();
    void setDetailId(const std::string& value);


protected:
    std::string detailId_;
    bool detailIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListEnterpriseResourceDetail_H_
