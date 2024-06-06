
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlUpdateInstanceNameRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlUpdateInstanceNameRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlUpdateInstanceNameRequest
    : public ModelBase
{
public:
    MysqlUpdateInstanceNameRequest();
    virtual ~MysqlUpdateInstanceNameRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlUpdateInstanceNameRequest members

    /// <summary>
    /// 实例名称。  用于表示实例的名称，同一租户下，同类型的实例名可重名。取值范围：最小为4个字符，最大为64个字符且不超过64个字节（注意：一个中文字符占用3个字节），必须以字母或中文开头，区分大小写，可以包含字母、数字、中划线、下划线或中文，不能包含其他特殊字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否同步修改节点名称，取值：true或false, 默认值为true。
    /// </summary>

    std::string getIsModifyNodeName() const;
    bool isModifyNodeNameIsSet() const;
    void unsetisModifyNodeName();
    void setIsModifyNodeName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string isModifyNodeName_;
    bool isModifyNodeNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlUpdateInstanceNameRequest_H_
