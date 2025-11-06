
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryE2eSettingResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryE2eSettingResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/ReqSettingDto.h>
#include <huaweicloud/codeartsrepo/v4/model/E2ePolicyDto.h>
#include <huaweicloud/codeartsrepo/v4/model/LinkSettingDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowRepositoryE2eSettingResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRepositoryE2eSettingResponse();
    virtual ~ShowRepositoryE2eSettingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepositoryE2eSettingResponse members

    /// <summary>
    /// 
    /// </summary>

    E2ePolicyDto getE2ePolicies() const;
    bool e2ePoliciesIsSet() const;
    void unsete2ePolicies();
    void setE2ePolicies(const E2ePolicyDto& value);

    /// <summary>
    /// 
    /// </summary>

    ReqSettingDto getReq() const;
    bool reqIsSet() const;
    void unsetreq();
    void setReq(const ReqSettingDto& value);

    /// <summary>
    /// 
    /// </summary>

    LinkSettingDto getLink() const;
    bool linkIsSet() const;
    void unsetlink();
    void setLink(const LinkSettingDto& value);


protected:
    E2ePolicyDto e2ePolicies_;
    bool e2ePoliciesIsSet_;
    ReqSettingDto req_;
    bool reqIsSet_;
    LinkSettingDto link_;
    bool linkIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryE2eSettingResponse_H_
