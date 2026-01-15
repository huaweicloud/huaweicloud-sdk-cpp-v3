
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RdsDbResponse_ret_list_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RdsDbResponse_ret_list_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  RdsDbResponse_ret_list
    : public ModelBase
{
public:
    RdsDbResponse_ret_list();
    virtual ~RdsDbResponse_ret_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RdsDbResponse_ret_list members

    /// <summary>
    /// rds数据库id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 状态 - SUCCESS：成功 - FAILED：失败
    /// </summary>

    std::string getRetStatus() const;
    bool retStatusIsSet() const;
    void unsetretStatus();
    void setRetStatus(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getRetMessage() const;
    bool retMessageIsSet() const;
    void unsetretMessage();
    void setRetMessage(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string retStatus_;
    bool retStatusIsSet_;
    std::string retMessage_;
    bool retMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RdsDbResponse_ret_list_H_
