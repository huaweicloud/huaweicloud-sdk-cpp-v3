
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowEnterpriseProjectResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowEnterpriseProjectResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/EnterpriseProject.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowEnterpriseProjectResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowEnterpriseProjectResponse();
    virtual ~ShowEnterpriseProjectResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowEnterpriseProjectResponse members

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 企业项目列表。
    /// </summary>

    std::vector<EnterpriseProject>& getEnterpriseProjectList();
    bool enterpriseProjectListIsSet() const;
    void unsetenterpriseProjectList();
    void setEnterpriseProjectList(const std::vector<EnterpriseProject>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<EnterpriseProject> enterpriseProjectList_;
    bool enterpriseProjectListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowEnterpriseProjectResponse_H_
