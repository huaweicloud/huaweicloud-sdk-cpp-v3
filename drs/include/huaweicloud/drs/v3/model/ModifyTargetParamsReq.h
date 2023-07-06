
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ModifyTargetParamsReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ModifyTargetParamsReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/ParamsReqBean.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改数据库参数请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ModifyTargetParamsReq
    : public ModelBase
{
public:
    ModifyTargetParamsReq();
    virtual ~ModifyTargetParamsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyTargetParamsReq members

    /// <summary>
    /// 参数分组
    /// </summary>

    std::string getGroup() const;
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const std::string& value);

    /// <summary>
    /// 修改的参数信息
    /// </summary>

    std::vector<ParamsReqBean>& getParams();
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const std::vector<ParamsReqBean>& value);


protected:
    std::string group_;
    bool groupIsSet_;
    std::vector<ParamsReqBean> params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ModifyTargetParamsReq_H_
