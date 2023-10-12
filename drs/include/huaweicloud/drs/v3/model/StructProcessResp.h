
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_StructProcessResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_StructProcessResp_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/drs/v3/model/StructProcessVO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 灾备初始化进度
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  StructProcessResp
    : public ModelBase
{
public:
    StructProcessResp();
    virtual ~StructProcessResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StructProcessResp members

    /// <summary>
    /// 数据生成时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 对比结果
    /// </summary>

    std::vector<StructProcessVO>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<StructProcessVO>& value);


protected:
    std::string createTime_;
    bool createTimeIsSet_;
    std::vector<StructProcessVO> result_;
    bool resultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_StructProcessResp_H_
