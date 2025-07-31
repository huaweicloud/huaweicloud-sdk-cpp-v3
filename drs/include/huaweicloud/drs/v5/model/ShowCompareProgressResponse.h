
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowCompareProgressResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowCompareProgressResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/QueryCompareJobProgressResp_full_info.h>
#include <huaweicloud/drs/v5/model/QueryCompareJobProgressResp_incre_info.h>
#include <huaweicloud/drs/v5/model/QueryCompareJobProgressResp_global_info.h>

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
class HUAWEICLOUD_DRS_V5_EXPORT  ShowCompareProgressResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCompareProgressResponse();
    virtual ~ShowCompareProgressResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCompareProgressResponse members

    /// <summary>
    /// 
    /// </summary>

    QueryCompareJobProgressResp_full_info getFullInfo() const;
    bool fullInfoIsSet() const;
    void unsetfullInfo();
    void setFullInfo(const QueryCompareJobProgressResp_full_info& value);

    /// <summary>
    /// 
    /// </summary>

    QueryCompareJobProgressResp_incre_info getIncreInfo() const;
    bool increInfoIsSet() const;
    void unsetincreInfo();
    void setIncreInfo(const QueryCompareJobProgressResp_incre_info& value);

    /// <summary>
    /// 
    /// </summary>

    QueryCompareJobProgressResp_global_info getGlobalInfo() const;
    bool globalInfoIsSet() const;
    void unsetglobalInfo();
    void setGlobalInfo(const QueryCompareJobProgressResp_global_info& value);


protected:
    QueryCompareJobProgressResp_full_info fullInfo_;
    bool fullInfoIsSet_;
    QueryCompareJobProgressResp_incre_info increInfo_;
    bool increInfoIsSet_;
    QueryCompareJobProgressResp_global_info globalInfo_;
    bool globalInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowCompareProgressResponse_H_
