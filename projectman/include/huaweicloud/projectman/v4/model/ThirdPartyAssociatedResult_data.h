
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ThirdPartyAssociatedResult_data_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ThirdPartyAssociatedResult_data_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/PageVO.h>
#include <huaweicloud/projectman/v4/model/ThirdPartyAssociatedDTO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项关联外部链接查询结果数据集
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ThirdPartyAssociatedResult_data
    : public ModelBase
{
public:
    ThirdPartyAssociatedResult_data();
    virtual ~ThirdPartyAssociatedResult_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ThirdPartyAssociatedResult_data members

    /// <summary>
    /// 工作项关联外部链接查询结果数据集合
    /// </summary>

    std::vector<ThirdPartyAssociatedDTO>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<ThirdPartyAssociatedDTO>& value);

    /// <summary>
    /// 
    /// </summary>

    PageVO getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const PageVO& value);


protected:
    std::vector<ThirdPartyAssociatedDTO> result_;
    bool resultIsSet_;
    PageVO page_;
    bool pageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ThirdPartyAssociatedResult_data_H_
