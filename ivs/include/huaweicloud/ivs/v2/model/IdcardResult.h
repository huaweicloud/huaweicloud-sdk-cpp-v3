
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_IdcardResult_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_IdcardResult_H_


#include <huaweicloud/ivs/v2/IvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IVS_V2_EXPORT  IdcardResult
    : public ModelBase
{
public:
    IdcardResult();
    virtual ~IdcardResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IdcardResult members

    /// <summary>
    /// 身份证上识别的名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 身份证号。
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 性别。
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 出生日期。
    /// </summary>

    std::string getBirth() const;
    bool birthIsSet() const;
    void unsetbirth();
    void setBirth(const std::string& value);

    /// <summary>
    /// 民族。
    /// </summary>

    std::string getEthnicity() const;
    bool ethnicityIsSet() const;
    void unsetethnicity();
    void setEthnicity(const std::string& value);

    /// <summary>
    /// 地址。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 发证机关。
    /// </summary>

    std::string getIssue() const;
    bool issueIsSet() const;
    void unsetissue();
    void setIssue(const std::string& value);

    /// <summary>
    /// 有效起始日期。
    /// </summary>

    std::string getValidFrom() const;
    bool validFromIsSet() const;
    void unsetvalidFrom();
    void setValidFrom(const std::string& value);

    /// <summary>
    /// 有效结束日期。
    /// </summary>

    std::string getValidTo() const;
    bool validToIsSet() const;
    void unsetvalidTo();
    void setValidTo(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string birth_;
    bool birthIsSet_;
    std::string ethnicity_;
    bool ethnicityIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string issue_;
    bool issueIsSet_;
    std::string validFrom_;
    bool validFromIsSet_;
    std::string validTo_;
    bool validToIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_IdcardResult_H_
