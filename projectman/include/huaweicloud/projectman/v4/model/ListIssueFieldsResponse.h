
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueFieldsResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueFieldsResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/FieldVO.h>
#include <huaweicloud/projectman/v4/model/PageVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIssueFieldsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListIssueFieldsResponse();
    virtual ~ListIssueFieldsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIssueFieldsResponse members

    /// <summary>
    /// 
    /// </summary>

    PageVO getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const PageVO& value);

    /// <summary>
    /// 返回数据
    /// </summary>

    std::vector<FieldVO>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<FieldVO>& value);


protected:
    PageVO page_;
    bool pageIsSet_;
    std::vector<FieldVO> result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueFieldsResponse_H_
